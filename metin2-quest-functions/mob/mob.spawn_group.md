# mob.spawn_group()
A função **mob.spawn_group** invoca группу определенных монстров на определенные координаты.

## Parâmetros da função
### group_vnum
Tipo *number*. **Parâmetro obrigatório**. ID группы из `group.txt`.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final.

### radius
Tipo *number*. **Parâmetro obrigatório**. Допустимая погрешность в координатах при появлении монстров.

### agressive
Tipo *boolean*. Агрессивны ли будут монстры ou нет. По умолчанию параметр равен `false`.

### count
Tipo *number*. Количество призванных групп. Se параметр будет равен `0`, então будет призвана одна группа; se будет больше `10`, então будет призвано 10 групп. По умолчанию параметр равен `1`.

## Valores de retorno
### mob_vid
Tipo *number*. VID лидера призванной группы. Se не удалось призвать монстров, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Предположительно, é retornado не одно значение. Допустим, se вы призвали две группы, então возвращаются два значения. Пример:

````lua
local group1_leader, group2_leader = mob.spawn_group(101, pc.get_local_x(), pc.get_local_y(), 0, false, 2)
````

Соответственно, чем больше групп призывается, тем больше возвращаемых значений.