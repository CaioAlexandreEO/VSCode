public class Boletim {

    public static void main(String[] args) {
        int mediaFinal = 7;
        //Para média igual ou acima de 7
        if(mediaFinal>=7)
        System.out.println("Aprovado!");
        //Para média proximo de 7 para exame
        else if(mediaFinal>=5)
        System.out.println("Exame");
        //Para média abaixo de 7
        else
        System.out.println("Reprovado!");
    }

}
