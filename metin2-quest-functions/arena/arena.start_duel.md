# arena.start_duel()
A função **arena.start_duel** teletransporta игроков на PvP-арену.

## Parâmetros da função
### opponent
Tipo *string*. **Parâmetro obrigatório**. Имя оппонента.

### timer
Tipo *number*. **Parâmetro obrigatório**. Quantidade de segundos, через которое игроки будут телепортированы на арену для проведения поединка.

## Valores de retorno
### status
Tipo *number*. Возвращаемое значение равно `1`, se функция выполнилась без ошибок. `0`, se один из игроков não existe; `2`, se один из участников уже сражается на арене; `3`, se все арены заняты.

## Notas
A função **não** pode ser chamada anonimamente.

При телепортации на арену игрок слезает с лошади и отзывает ее автоматически.