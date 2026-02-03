# marriage.wedding_client_command()
Функция **marriage.wedding_client_command** исполняет определенную команду внутри клиента у всех игроков, находящихся на свадебном острове.

## Parâmetros da função
### command
Tipo *string*. **Parâmetro obrigatório**. O comando que será executado no cliente.

## Notas
A função **não** pode ser chamada anonimamente.

Эта функция является аналогом функции [cmdchat](../global/cmdchat.md)(), только работает на всех игроков, находящихся на свадебном острове.

A função pode ser usada apenas por jogadores, que iniciaram a cerimónia de casamento. Os convidados não podem chamar esta função.

С помощью этой функции, например, можно сделать так, чтобы все игроки, находящиеся на свадьбе, одновременно начали танцевать один и тот же танец.