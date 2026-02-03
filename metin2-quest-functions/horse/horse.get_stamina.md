# horse.get_stamina()
A função **horse.get_stamina** informa количество выносливости у лошади.

## Valores de retorno
### stamina
Tipo *number*. Количество оставшейся выносливости у лошади. Se у игрока нет лошади (se ее уровень равен `0`), então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Для этой функции вряд ли можно найти применение, лучше использовать функцию [horse.get_stamina_pct](../horse/horse.get_stamina_pct.md)().