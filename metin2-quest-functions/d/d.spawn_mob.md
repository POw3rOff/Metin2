# d.spawn_mob()
A função **d.spawn_mob** invoca um monstro ou NPC na masmorra.

## Parâmetros da função
### mob_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do monstro.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final, para onde o monstro será invocado.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final, para onde o monstro será invocado.

### radius
Tipo *number*. Margem de erro nas coordenadas ao aparecer o monstro. Se параметр равен, por exemplo, 15, então координаты появления um monstro serão iguais a ([x](#x) &plusmn; 15, [y](#y) &plusmn; 15); o mesmo na forma de missão:

````lua
local mob_vnum = 101
local x = pc.get_local_x()
local y = pc.get_local_y()
local radius = 15
local count = 3
d.spawn_mob(
	mob_vnum,
	x + number(radius * -1, radius),
	y + number(radius * -1, radius),
	0,
	count
)
````

O parâmetro por defeito é igual a `0`.

### count
Tipo *number*. Quantidade de monstros invocados. O parâmetro por defeito é igual a `1`.

## Valores de retorno
### mob_vid
Tipo *number*. VID do monstro invocado.

## Notas
A função pode ser chamada anonimamente.

Esta função funciona apenas em masmorras.