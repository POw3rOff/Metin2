# d.kill_all()
Функция **d.kill_all** убивает всех монстров и NPC na masmorra.

## Notas
A função pode ser chamada anonimamente.

Pode acontecer que o monstro, que renasce noutro monstro após a morte, não morra, mas renasça. Por exemplo, pode не funcionar em &laquo;Demónios Vis&raquo; na Torre dos Demónios. Possivelmente um bug.

Обратите внимание на então, что se использовать эту функцию для очистки подземелья, então за всех монстров, которым участники подземелья нанse хотя бы единицу урона, игроки получат опыт и шанс на выпадения лута, se он с них падает. Короче говоря, будет считаться, что эти монстры были убиты игроками. Se вам это не нужно, используйте функцию [d.purge](../d/d.purge.md)().

Чтобы убить определенного um monstro na masmorra, используйте функцию [d.kill_unique](../d/d.kill_unique.md)().

Esta função funciona apenas em masmorras.