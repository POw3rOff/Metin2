# guild.guild_around_ranking_string()
A função **guild.guild_around_ranking_string** informa список гильдий, которые находятся в топе возле гильдии, в ao qual состоит que chamou a função игрок.

## Valores de retorno
### around_ranking
Tipo *string*. Список из 7 гильдий, отсортированных по позиции в топе. 3 гильдии, которые находятся выше гильдии, в ao qual состоит игрок, затем гильдия, в ao qual состоит игрок, и 3 гильдии, которые ниже. О том, как выглядит строка, подробно написано в функции [guild.high_ranking_string](../guild/guild.high_ranking_string.md)(). Se игрок не состоит в гильдии, então é retornado uma string vazia, ou seja `""`.

## Notas
A função **não** pode ser chamada anonimamente.