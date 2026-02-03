# d.exit()
A função **d.exit** teletransporta игрока на координаты, заданные функциями [pc.set_warp_location](../pc/pc.set_warp_location.md)(), [pc.set_warp_location_local](../pc/pc.set_warp_location_local.md)() и [d.set_warp_location](../d/d.set_warp_location.md)().

## Notas
A função **não** pode ser chamada anonimamente.

O teletransporte é possível mesmo durante a negociação. Se по какой-então причине необходимо запретить её, então следует использовать функцию [pc.can_warp](../pc/pc.can_warp.md)() для проверки.

Эта функция имеет аналог, работающий на всех участников подземелья &mdash; [d.exit_all](../d/d.exit_all.md)().

Esta função funciona apenas em masmorras.