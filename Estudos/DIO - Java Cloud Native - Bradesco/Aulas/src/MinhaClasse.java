public class MinhaClasse {

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

}
