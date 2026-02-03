# marriage.wedding_is_playing_music()
Функция **marriage.wedding_is_playing_music** informa, играет ли свадебная музыка ou нет.

## Valores de retorno
### is_playing
Tipo *mixed*. Se функция была вызвана от имени сервера ou игроком, который в данный момент не проводит свадьбу, então nada é retornado, ou seja `nil`.

Se на свадьбе включена свадебная музыка (se была вызвана функция [marriage.wedding_music](../marriage/marriage.wedding_music.md)() с первым параметром `true`), então é retornado `true` <sup>boolean</sup>, иначе `false` <sup>boolean</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

A função pode ser usada apenas por jogadores, que iniciaram a cerimónia de casamento. Os convidados não podem chamar esta função.