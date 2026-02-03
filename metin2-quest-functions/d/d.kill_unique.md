# d.kill_unique()
Функция **d.kill_unique** убивает уникального um monstro.

## Parâmetros da função
### unique_name
Tipo *string*. **Parâmetro obrigatório**. Nome do monstro único.

## Notas
A função pode ser chamada anonimamente.

Pode acontecer que o monstro, que renasce noutro monstro após a morte, não morra, mas renasça. Por exemplo, pode не funcionar em &laquo;Demónios Vis&raquo; na Torre dos Demónios. Possivelmente um bug.

Обратите внимание на então, что se убить этой функцией um monstro, которому участники подземелья нанse хотя бы единицу урона, игроки получат опыт и шанс на выпадения лута, se он с этого um monstro падает. Короче говоря, будет считаться, что этот монстр был убит игроками. Se вам это не нужно, используйте функцию [d.purge_unique](../d/d.purge_unique.md)().

Для убийства всех монстров na masmorra используйте функцию [d.kill_all](../d/d.kill_all.md)().

A função funciona apenas em masmorras.