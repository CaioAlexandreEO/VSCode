let alunos = []; // Array para armazenar os alunos cadastrados

// Função para mostrar página correspondente ao clicar nos links de navegação
function showPage(page) {
    const mainContent = document.getElementById("main-content");
    mainContent.innerHTML = "";

    if (page === "home") {
        mainContent.innerHTML = `
            <h2>Bem-vindo ao Sistema de Gerenciamento de Presença</h2>
            <p>Este sistema permite que você cadastre alunos e registre suas presenças de forma eficiente.</p>
            <p>Use o menu de navegação acima para acessar as diferentes funcionalidades.</p>
        `;
    } else if (page === "cadastro") {
        renderCadastroPage();
    } else if (page === "entrada") {
        renderEntradaPage();
    } else if (page === "saida") {
        renderSaidaPage();
    } else if (page === "historico") {
        renderHistoricoPage();
    }
}

// Função para renderizar a página de cadastro de alunos
function renderCadastroPage() {
    const mainContent = document.getElementById("main-content");
    mainContent.innerHTML = `
        <h2>Cadastro de Alunos</h2>
        <div id="alunos-list">
            <h3>Alunos Cadastrados</h3>
            <ul>
                ${alunos.map(aluno => `
                    <li>${aluno.matricula} - ${aluno.nome} 
                        <button onclick="editAluno('${aluno.matricula}')">Editar</button>
                    </li>
                `).join('')}
            </ul>
        </div>
        <form id="student-form">
            <input type="text" id="matricula" placeholder="Matrícula" required>
            <input type="text" id="nome" placeholder="Nome" required>
            <button type="submit">Adicionar/Editar Aluno</button>
        </form>
    `;

    document.getElementById("student-form").addEventListener("submit", function(event) {
        event.preventDefault();
        const matricula = document.getElementById("matricula").value.trim();
        const nome = document.getElementById("nome").value.trim();
        if (matricula && nome) {
            const index = alunos.findIndex(aluno => aluno.matricula === matricula);
            if (index !== -1) {
                alunos[index].nome = nome; // Atualiza o nome do aluno existente
            } else {
                alunos.push({ matricula, nome, historico: [] }); // Adiciona um novo aluno
            }
            console.log("Aluno cadastrado/editado:", matricula, nome);
            renderCadastroPage();
            document.getElementById("matricula").value = "";
            document.getElementById("nome").value = "";
        } else {
            alert("Por favor, preencha todos os campos.");
        }
    });
}

// Função para editar um aluno
function editAluno(matricula) {
    const aluno = alunos.find(aluno => aluno.matricula === matricula);
    if (aluno) {
        document.getElementById("matricula").value = aluno.matricula;
        document.getElementById("nome").value = aluno.nome;
    }
}

// Função para renderizar a página de entrada
function renderEntradaPage() {
    const mainContent = document.getElementById("main-content");
    mainContent.innerHTML = `
        <h2>Registrar Entrada</h2>
        <form id="entrada-form">
            <input type="text" id="matricula-entrada" placeholder="Matrícula" required>
            <button type="submit">Registrar Entrada</button>
        </form>
    `;
    document.getElementById("entrada-form").addEventListener("submit", function(event) {
        event.preventDefault();
        const matricula = document.getElementById("matricula-entrada").value.trim();
        const aluno = alunos.find(aluno => aluno.matricula === matricula);
        if (aluno) {
            const dataHoraEntrada = new Date().toLocaleString();
            aluno.historico.push({ tipo: "Entrada", dataHora: dataHoraEntrada });
            console.log("Entrada registrada para", aluno.nome, "às", dataHoraEntrada);
            renderEntradaPage();
            document.getElementById("matricula-entrada").value = "";
        } else {
            alert("Aluno não encontrado.");
        }
    });
}

// Função para renderizar a página de saída
function renderSaidaPage() {
    const mainContent = document.getElementById("main-content");
    mainContent.innerHTML = `
        <h2>Registrar Saída</h2>
        <form id="saida-form">
            <input type="text" id="matricula-saida" placeholder="Matrícula" required>
            <button type="submit">Registrar Saída</button>
        </form>
    `;
    document.getElementById("saida-form").addEventListener("submit", function(event) {
        event.preventDefault();
        const matricula = document.getElementById("matricula-saida").value.trim();
        const aluno = alunos.find(aluno => aluno.matricula === matricula);
        if (aluno) {
            const dataHoraSaida = new Date().toLocaleString();
            aluno.historico.push({ tipo: "Saída", dataHora: dataHoraSaida });
            console.log("Saída registrada para", aluno.nome, "às", dataHoraSaida);
            renderSaidaPage();
            document.getElementById("matricula-saida").value = "";
        } else {
            alert("Aluno não encontrado.");
        }
    });
}

// Função para renderizar a página de histórico
function renderHistoricoPage() {
    const mainContent = document.getElementById("main-content");
    mainContent.innerHTML = `
        <h2>Histórico de Entrada e Saída</h2>
        <input type="text" id="search-input" placeholder="Buscar aluno..." oninput="searchAlunos(this.value)">
        <ul id="historico-list">
            ${alunos.map(aluno => `
                <li>${aluno.nome}
                    <ul>
                        ${aluno.historico.map(registro => `
                            <li>${registro.tipo} - ${registro.dataHora}</li>
                        `).join('')}
                    </ul>
                </li>
            `).join('')}
        </ul>
    `;
}

// Função para pesquisar alunos no histórico
function searchAlunos(query) {
    const filteredAlunos = alunos.filter(aluno => aluno.nome.toLowerCase().includes(query.toLowerCase()));
    const historicoList = document.getElementById("historico-list");
    historicoList.innerHTML = `
        ${filteredAlunos.map(aluno => `
            <li>${aluno.nome}
                <ul>
                    ${aluno.historico.map(registro => `
                        <li>${registro.tipo} - ${registro.dataHora}</li>
                    `).join('')}
                </ul>
            </li>
        `).join('')}
    `;
}
