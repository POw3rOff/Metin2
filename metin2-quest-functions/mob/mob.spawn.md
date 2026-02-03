# mob.spawn()
A função **mob.spawn** invoca определенных монстров на определенные координаты.

## Parâmetros da função
### mob_vnum
Tipo *number*. **Parâmetro obrigatório**. Vnum do monstro, который будет призван.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final.

### radius
Tipo *number*. **Parâmetro obrigatório**. Допустимая погрешность в координатах при появлении монстров.

### agressive
Tipo *boolean*. Агрессивны ли будут монстры ou нет. По умолчанию параметр равен `false`.

### count
Tipo *number*. Количество призванных монстров. Se параметр будет равен `0`, então будет призван один монстр; se будет больше `10`, então будет призвано 10 монстров. По умолчанию параметр равен `1`.

## Valores de retorno
### mob_vid
Tipo *number*. VID do monstro invocado. Se не удалось призвать монстров, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Предположительно, é retornado не одно значение. Допустим, se вы призвали двух монстров, então возвращаются два значения. Пример:

````lua
local mob1, mob2 = mob.spawn(101, pc.get_local_x(), pc.get_local_y(), 0, false, 2)
````

Соответственно, чем больше монстров призывается, тем больше возвращаемых значений.