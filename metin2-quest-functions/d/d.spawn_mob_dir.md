# d.spawn_mob_dir()
A função **d.spawn_mob_dir** invoca um monstro ou NPC na masmorra, повернутого в определенную сторону.

## Parâmetros da função
### mob_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do monstro.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final, para onde o monstro será invocado.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final, para onde o monstro será invocado.

### direction
Tipo *number*. **Parâmetro obrigatório**. Направление по часовой стрелке, куда будет смотреть монстр. Направление высчитывается по формуле `(direction - 1) * 45`. Таким образом можно использовать направления от 0&deg; до 359&deg;, а значит, что параметр может быть числом от `1` до `8`. Se параметр равен `0`, então направление будет задано случайно.

## Valores de retorno
### mob_vid
Tipo *number*. VID do monstro invocado. Se ocorrer algum erro durante a invocação, então este valor não é retornado de todo.

## Notas
A função pode ser chamada anonimamente.

Существует аналог этой функции, который позволяет задать направление в градусах &mdash; [d.spawn_mob_ac_dir](../d/d.spawn_mob_ac_dir.md)().

A função pode ser útil se for necessário invocar um NPC ou monstro, que não se podem mover, para definir a sua direção. Por exemplo, para que não fiquem virados para a parede. A utilização desta função para invocar monstros e NPCs, que se podem mover, não é recomendável.

Esta função funciona apenas em masmorras.