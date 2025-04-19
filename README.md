# SimulcaoAcessoLojaVirtual-LVP8
LVP8 - Disciplina Técnicas de programação - UFCG
Simulação de acesso a uma Loja Virtual

Inicialmente, crie uma classe Pessoa, que possuirá como atributos o nome, CPF e telefone.

Em seguida, crie duas classes derivadas de Pessoa, uma para Funcionário e outra para Cliente. A classe Funcionário terá como atributos o número de registro na empresa, senha e salário. A classe Cliente terá como atributos o produto escolhido e valor.

A classe Funcionário e Cliente deverão ter, cada uma, a função de imprimir dados do usuário, informando se é funcionário ou cliente. Os respectivos construtores deverão receber os dados por parâmetros.

Faça um programa que crie um funcionário e um cliente. Para o cliente deverão ser fornecidos nome, CPF e telefone. Para o funcionário, esses dados também deverão ser fornecidos, acrescido do número de registro na empresa, senha e salário. Lembre-se que esses dados deverão ser iniciados no construtor de cada classe.

Em seguida, simule o acesso ao sistema. Se for funcionário, verificar a senha. Se for cliente, fazer uma compra escolhendo um produto e valor (para simplificar, o cliente deve escolher entre três produtos que lhe são apresentados com o respectivo valor).

A main deverá verificar se a senha digitada pelo funcionário está correta, de acordo com o que foi informado no momento da instanciação do objeto, e imprimir os respectivos dados caso a senha seja válida. Se for um cliente, apresentar as opções de produtos e atualizar a opção escolhida pelo cliente (veja que precisará ter um método na classe Cliente para atualizar os atributos produto e valor). Neste caso, imprimir todos os dados do cliente, inclusive produto e valor escolhido.
