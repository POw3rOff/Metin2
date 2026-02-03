# regen_in_map()
A função **regen_in_map** invoca монстров из regen-файла.

## Parâmetros da função
### map_index
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa.

### path
Tipo *string*. **Parâmetro obrigatório**. Caminho para o ficheiro regen. Pode especificar o caminho completo ou relativo. O caminho relativo deve ser especificado em relação ao diretório, onde o núcleo do jogo está localizado.

## Notas
A função pode ser chamada anonimamente.

Монстры будут призваны единожды независимо от того, что указано в настройках regen-файла.

Эта функция не для динамеческого использования. Например, вы не сможете призвать монстров возле игрока. Для таких целей есть функции [mob.spawn](../mob/mob.spawn.md)() и [mob.spawn_group](../mob/mob.spawn_group.md)().