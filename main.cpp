#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1;
    cliente1.nome = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
	cliente1.Cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	cliente2.Cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	cliente3.Cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco ="Dayton";
	cliente4.Cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
	cliente5.Cep = "13061981";
    cliente5.print();




    Especialista e01 ("Peter Parker", 46, 27061975, 3000, "Fotografia");
    Especialista e02 ("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista e03 ("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.idade = 72;
    g01.registro = 21121948;
    g01.SalarioBase = 10000;


    Venda v01;
    v01.cliente = cliente1;
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.valor = 100;
    e01.comissao(v01.valor);
    e01.contagemAtendimento();


    Venda v02;
    v02.cliente = cliente4;
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.valor = 100;
    comissao02 += e02.comissao(v02.valor);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente = cliente2;
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.valor = 150;
    comissao01 += e01.comissao(v03.valor);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente = cliente1;
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.valor = 10;
    comissao02 += e02.comissao(v04.valor);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente = cliente4;
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.valor = 10000;
    comissao03 += e03.comissao(v05.valor);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente = cliente5;
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.valor = 3000;
    comissao03 += e03.comissao(v06.valor);
    numAtendimentos03+=1;

    Venda v07;
    v07.cliente= cliente1;
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.valor = 5000;
    comissao03 += e03.comissao(v07.valor);
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente = cliente3;
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.valor = 80;
    comissao02 += e02.comissao(v08.valor);
    numAtendimentos02+=1;


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl;

    v02.print();
    cout << " Descricao: " << v02.descricao << endl;

    v03.print();
    cout << " Descricao: " << v03.descricao << endl;

    v04.print();
    cout << " Descricao: " << v04.descricao << endl;

    v05.print();
    cout << " Descricao: " << v05.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v07.print();
    cout << " Descricao: " << v07.descricao << endl;

    v08.print();
    cout << " Descricao: " << v08.descricao << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.SalarioBase+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.SalarioBase+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.SalarioBase+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
