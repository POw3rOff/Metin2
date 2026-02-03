# d.spawn_goto_mob()
A função **d.spawn_goto_mob** invoca портал, при входе в который игрока без экрана загрузки телепортирует на указанные координаты.

## Parâmetros da função
### x_from
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final, куда будет призван портал.

### y_from
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final, куда будет призван портал.

### x_to
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final, куда будет телепортирован игрок при входе в портал.

### y_to
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final, куда будет телепортирован игрок при входе в портал.

## Notas
A função pode ser chamada anonimamente.

Игрок, войдя в портал, сможет телепортироваться даже во время торга.

Телепортация через портал происходит без загрузочного экрана.

Портал будет иметь имя `. x_to y_to`, onde [x_to](#x_to) и [y_to](#y_to) &mdash; это значение параметров.

Не известно, будет ли портал отображаться на миникарте.

Портал не имеет внутриигровой модели.

Призываемый портал имеет ID `20039`.

Esta função funciona apenas em masmorras.