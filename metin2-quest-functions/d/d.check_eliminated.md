# d.check_eliminated()
A função **d.check_eliminated** verifica se есть ли na masmorra монстры. Se монстров нет, então функция исполняет установленные ранее eliminate-функциями инструкции.

## Notas
A função pode ser chamada anonimamente.

Существует всего две eliminate-функции: [d.set_exit_all_at_eliminate](../d/d.set_exit_all_at_eliminate.md)() и [d.set_warp_at_eliminate](../d/d.set_warp_at_eliminate.md)().

Эта функция автоматически в фоновом режиме вызывается при каждом уменьшении количества монстров na masmorra независимо от того, использовали ли вы ее в своих квестах ou нет.

Понять, что делает эта функция, достаточно тяжело. Постарайтесь рассматривать эту функцию не только как квестовую функцию, но и как событие, которое происходит при уменьшении количества монстров na masmorra. Названные выше две функции дают серверу указания, что делать в случае, se na masmorra не осталось монстров: выкинуть всех игроков из подземелья ou телепортировать всех игроков на определенные координаты внутри подземелья. Se вызвать эту функцию, имея na masmorra хотя бы одного um monstro, então вообще ничего не произойдет. Se эта функция вызвана после того, как была вызвана функция [d.set_exit_all_at_eliminate](../d/d.set_exit_all_at_eliminate.md)(), então все игроки вылетят из подземелья. При этом все игроки вылетят из него даже в том случае, se функция **d.check_eliminated()** вообще не была вызвана. Другими словами, для работы eliminate-функций использовать эту функцию вообще не обязательно.

Se одновременно были объявлены функции [d.set_exit_all_at_eliminate](../d/d.set_exit_all_at_eliminate.md)() и [d.set_warp_at_eliminate](../d/d.set_warp_at_eliminate.md)(), então приоритет будет отдан функции [d.set_exit_all_at_eliminate](../d/d.set_exit_all_at_eliminate.md)(), а функция [d.set_warp_at_eliminate](../d/d.set_warp_at_eliminate.md)() исполнена не будет.

Esta função funciona apenas em masmorras.