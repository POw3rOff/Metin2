# spawn_mob()
A função **spawn_mob** invoca монстров возле игрока.

## Parâmetros da função
### mob_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do monstro.

### count
Tipo *number*. **Parâmetro obrigatório**. Количество монстров (не более 10). Se указано число больше 10, então будут призваны 10 монстров (возможны неточности).

### is_aggressive
Tipo *boolean*. **Parâmetro obrigatório**. Будут ли призванные монстры агрессивны.

## Valores de retorno
### count
Tipo *number*. Количество призванных монстров. Se один из параметров имеет неверный тип, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Монстры появятся не ближе чем на 2 единицы координат к игроку и не дальше чем на 8 единиц координат.