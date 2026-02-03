# forked.setdeadcount()
A função **forked.setdeadcount** define количество раз, сколько может умереть каждый игрок во время битвы империй.

## Notas
A função **não** pode ser chamada anonimamente.

Функция не принимает никаких параметров. Количество por exemploых смертей defineся через эвентовый флаг `threeway_war_dead_count`, например функцией [game.set_event_flag](../game/game.set_event_flag.md)().

Данная функция не означает, что игрок автоматически вылетит с битвы империй, когда умрет. Для того, чтобы он вылетел, надо использовать проверку usando a função [forked.setdeadcount](../forked/forked.setdeadcount.md)() и использовать функцию телепортации, вроде [pc.warp](../pc/pc.warp.md)().

Esta função funciona apenas durante a batalha dos impérios (ver [forked](../forked)).