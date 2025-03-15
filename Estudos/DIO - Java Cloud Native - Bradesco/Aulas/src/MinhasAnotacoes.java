public class MinhasAnotacoes {

    public static void main (String []args) {
        System.out.println( "Esse é meu primeiro código em java");

        //Variaveis
        
        //Tipo da Variavel (String{para texto}, Int{para numeros inteiros}, etc)
        // |    Nome da variavel (Sempre bem definido)  
        // |      |         Valor da variavel 
        // |      |             |
        String meuNome = "Caio Alexandre";
        //Variavel com todas letra em maiusculo nao pode ser alterado após definido, somente se alterado na linha de criação
        double PI = 3.14;
        int ESTADOS_BRASILEIROS = 27;
        //Variaveis só podem conter letras, _(underline), $ ou números de 0 a 9(não podendo iniciar a variavel) e iniciar com letra minuscula

        int idade = 23;
        double altura = 1.82;
        boolean verdadeira = true;

        String primeiroNome = "Caio";
        String segundoNome = "Alexandre";
        String nomeCompleto = nomeCompleto (primeiroNome,segundoNome);
        System.out.println(nomeCompleto);
        
    }

    public static String nomeCompleto (String primeiroNome, String segundoNome){
         //Metodos

        
        return "O resultado desse metodo é " + primeiroNome.concat(" ").concat(segundoNome);
    }

    public static void tiposVariaveis (){
        System.out.println("Os tipos de variaveis primitivas para dados em java são: int; byte; short; long; float; double; boolean; char. Totalizando 8 tipos.");
        //<Tipo> <nomeVariavel> <atribuicaoDeValor>

        int idade;
        int anoDeNascimento = 2001;
        double salarioMinimo = 2500; //Caso tenha decimais definidos usar o "." para definir (2500.30)

        //Caso o numero começar com "0" como em um CPF, usar outro tipo de variavel, como String.

        //Quando usar o tipo Long, usar L no final do numero para otimização de memória.

        final double VALOR_DE_PI = 3.14;
        //Sempre que um valor não pode ser alterado na variavel, é usado o "final" antes do tipo de variavel e é usado o nome da variavel em CAIXA ALTA.
    }

    public static void operadores (String [] args){
        //Simbolos especias que tem significado próprio para a linguagem e tem determinadas ações

        // = (Operador de atribuição)
        String nome = "Caio";
        int idade = 22;
        double peso = 100;
        char sexo = 'M';

        // +, -, /, *(Operadores aritmeticos) % (Modulo) usado para conferir se o numero é fracionado ou não
        double soma = 10.3 + 8.75;
        int subtracao = 11 - 9;
        int multiplicacao = 10 * 60;
        double divisao = 34 / 276;
        int modulo = 18 % 3;
        double resultado = (10*7) + (20/4);
        //Nem sempre é usado diretamente com numeros, pode ser usado com variaveis e palavras com string também.

        //Pode ser feito assim a concatenação de numeros e strings.
        String concatenacao1 = "?";
        concatenacao1 = 1 + 1 + "1";//21
        concatenacao1 = 1 + "1" + 1;//111
        concatenacao1 = "1" + 1 + 1;//111
        concatenacao1 = "1" + (1+1);//12
        //Sempre que o valor em concatenação com numeros for a frente, os numeros seguintes ficam concatenados por inteiros, sem soma. Caso esteja entre parenteses é feito primeiro o calculo e depois a concatenação.

        //Operador Unário
        //(+) Valor positivo - Valores que são positivos. Todo numero sem operador, tem valor positivo
        //(-) Valor negativo - Valor que são nagativos.
        //(++) Incrementa 1 - Incrementa o valor em 1 unidade;
        //(--) Decrementa 1 - Decrementa o valor em 1 unidade;
        //(1) Logico de negação - nega o valor de uma expressão boleana.

        int numero = 5;
        //Exemplos
        System.out.println(numero);//5
        System.out.println(-numero);//-5
        System.out.println(+numero);//5
        System.out.println(++numero);//6
        System.out.println(--numero);//4
        //Pode ser feito de outra forma tambem
        System.out.println(numero++);//Sera impresso 5 porem em sua proxima impressão sera 6.
        boolean variavel = true;
        System.out.println(!variavel);//Imprime como false
        //Ou
        variavel = !variavel;
        System.out.println(variavel);

        //Operador ternario
        // Usados como operadores booleanos para "?" verdadeiro e ":" falso, podendo assim variar a resposta do terminal, como por exemplo

        int ter1,ter2;
        ter1 = 5;
        ter2 = 6;

        String resultadoTer= ter1==ter2 ?"é igual" :"não é igual";//Não limitado a somente string, pode ser qualquer tipo de variavel

        System.out.println(resultadoTer);

        //Operadores relacionais
        //== Verificar se dois valores são igual
        //!= Verifica se dois valores tem diferença
        //> Verifica se o valor 1 é maior que o valor 2
        //>= Verifica se o valor 1 é maior ou igual ao valor 2
        //< Verifica se o valor 1 é menor que o valor 2
        //<= Verifica se o valor 1 é menor ou igual ao valor 2
        
        int num1, num2;
        num1 = 1;
        num2 = 2;

        boolean trueFalse = num1 == num2;

        System.out.println("O numero 1 é igual ao numero 2?" + trueFalse);
        
        boolean trueFalse1= num1 != num2;

        System.out.println("O numero 1 é diferente ao numero 2?" + trueFalse1);

        boolean trueFalse2= num1 > num2;

        System.out.println("O numero 1 é maior ao numero 2?" + trueFalse2);

        boolean trueFalse3= num1 >= num2;

        System.out.println("O numero 1 é maior ou igual ao numero 2?" + trueFalse3);

        boolean trueFalse4= num1 < num2;

        System.out.println("O numero 1 é menor ao numero 2?" + trueFalse4);

        boolean trueFalse5= num1 <= num2;

        System.out.println("O numero 1 é menor ou igual ao numero 2?" + trueFalse5);

        //Operadores Lógicos
        //&& - Operdaor Lógico "E"
        //|| - Operador Lógico "OU"
        boolean condicao1 = true;
        boolean condicao2 = false;
        if (condicao1 && condicao2){
            System.out.println("As duas condições são verdadeiras");
        }
        if (condicao1 || condicao2) {
            System.out.println("Uma das condições é verdadeira");
        }

        boolean numero1 = num1<num2;
        boolean numero2 = num1==1;
        if (numero1 && numero2){
            System.out.println("As duas condições são verdadeiras");
        }
    }
    
}
