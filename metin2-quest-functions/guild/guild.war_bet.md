# guild.war_bet()
Функция **guild.war_bet** позволяет сделать ставку на исход войны гильдий.

## Parâmetros da função
### war_id
Tipo *number*. **Parâmetro obrigatório**. ID войны гильдии.

### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda, которая принимает участие в этой войне, на которую делается ставка.

### money
Tipo *number*. **Parâmetro obrigatório**. Количество янг, которое будет поставлено на гильдию.

## Notas
A função **não** pode ser chamada anonimamente.

Эта функция не забирает у игрока янги. Их надо забрать любой функцией, например [pc.change_gold](../pc/pc.change_gold.md)().

После завершения войны гильдий игрок автоматически получает янги, se гильдия, на которую он поставил, победит. Неизвестно, что будет, se игрок в этот момент будет вне сети, а также неизвестно, сколько янг получит игрок.