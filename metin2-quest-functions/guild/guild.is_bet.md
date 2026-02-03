# guild.is_bet()
Функция **guild.is_bet** informa, делал ли игрок ставку на определенную войну гильдий ou нет.

## Parâmetros da função
### war_id
Tipo *number*. **Parâmetro obrigatório**. ID войны гильдий.

## Valores de retorno
### is_bet
Tipo *boolean*. Делал ли игрок ставку на эту войну ou нет. `true`, se делал ставку ou se параметр [war_id](#war_id) não for um número ou não foi definido; `false`, se не делал ставку.

## Notas
A função **não** pode ser chamada anonimamente.