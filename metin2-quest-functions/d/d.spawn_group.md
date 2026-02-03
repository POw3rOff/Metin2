# d.spawn_group()
A função **d.spawn_group** invoca группу монстров na masmorra.

## Parâmetros da função
### group_vnum
Tipo *number*. **Parâmetro obrigatório**. ID группы монстров из файла `group.txt`.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final, куда будет призвана группа монстров.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final, куда будет призвана группа монстров.

### radius
Tipo *number*. **Parâmetro obrigatório**. Допустимая погрешность в координатах при появлении группы монстров. Se параметр равен, por exemplo, 15, então координаты появления группы монстров serão iguais a ([x](#x) &plusmn; 15, [y](#y) &plusmn; 15); o mesmo na forma de missão:

````lua
local group_vnum = 101
local x = pc.get_local_x()
local y = pc.get_local_y()
local radius = 15
local count = 3
d.spawn_group(
	group_vnum,
	x + number(radius * -1, radius),
	y + number(radius * -1, radius),
	0,
	true,
	count
)
````

### agressive
Tipo *boolean*. **Parâmetro obrigatório**. Агрессивны ли будут монстры ou нет.

### count
Tipo *number*. **Parâmetro obrigatório**. Количество призываемых групп.

## Valores de retorno
### mob_vid
Tipo *number*. VID лидера одной из групп.

## Notas
A função pode ser chamada anonimamente.

Se было вызвано несколько групп, é retornado VID только лидера одной из них.

Esta função funciona apenas em masmorras.