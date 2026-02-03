# guild.change_master_with_limit()
Функция **guild.change_master_with_limit** позволяет сменить лидера гильдии, в ao qual состоит игрок, определив множество дополнительных ограничений и настроек.

## Parâmetros da função
### player_name
Tipo *string*. **Parâmetro obrigatório**. Nome do jogador, который станет новым лидером.

### level_limit
Tipo *number*. **Parâmetro obrigatório**. Минимальный уровень, который необходим для того, чтобы стать новым лидером гильдии.

### resign_limit
Tipo *number*. **Parâmetro obrigatório**. Число, которое будет установлено в качестве параметра флага `resign_limit` квеста `change_guild_master` игроку, который станет новым лидером. В ядре этот флаг обычно ниonde не используется, поэтому вы можете сами найти ему применение в каком-нибудь квесте.

### be_other_leader
Tipo *number*. **Parâmetro obrigatório**. Таймштамп. Дата, до ao qual игрок, que chamou a função, не сможет становиться лидером гильдии через эту функцию. Таймштамп записывается в качестве параметра флага `be_other_leader` квеста `change_guild_master`.

### be_other_member
Tipo *number*. **Parâmetro obrigatório**. Таймштамп. Дата, до ao qual игрок, que chamou a função, не сможет становиться участником другой гильдии. Таймштамп записывается в качестве параметра флага `be_other_member` квеста `change_guild_master`.

### ignore_be_other_leader
Tipo *boolean*. **Parâmetro obrigatório**. Se установить как `true`, então функция никогда не вернет число `7` (см. возвращаемые значения).

## Valores de retorno
### status
Tipo *number*. Результат выполнения функции.

* `3`, se лидер гильдии был усешно изменен;
* `0`, se параметр [player_name](#player_name) не является строкой ou вообще não foi definido;
* `1`, se игрок, que chamou a função, не является лидером гильдии;
* `2`, se игрок, которому неободимо передать права лидера, не находится в гильдии;
* `4`, se игрок не состоит в гильдии;
* `5`, se игрок не был найден (вероятнее всего, не будет работать, se игроки на разных локациях ou каналах);
* `6`, se уровень нового лидера меньше, чем указанный в параметре [level_limit](#level_limit);
* `7`, se игрок недавно уже становился лидером гильдии с помощью этой функции и se в последний раз, когда вызывалась функция, параметр [be_other_leader](#be_other_leader) содержал таймштап больший, чем используется в данный момент. Используйте параметр [ignore_be_other_leader](#ignore_be_other_leader), чтобы игнорировать эту ошибку.

## Notas
A função **não** pode ser chamada anonimamente.