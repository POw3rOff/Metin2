# horse.summon()
A função **horse.summon** invoca лошадь.

## Parâmetros da função
### far
Tipo *boolean*. Определяет, как появится лошадь. Se указать `true`, então лошадь прибежит издалека; se указать `false`, então лошадь появится прямо возле игрока. Se здоровье лошади равно нулю ([horse.get_health_pct](../horse/horse.get_health_pct.md)()), então параметр автоматически станет равен `false`. O parâmetro por defeito é igual a `false`.

### horse_vnum
Tipo *number*. ID do monstro ou NPC, который будет вызван вместо лошади. Применение этого параметра на практике неизвестно. O parâmetro por defeito é igual a ID лошади, которая соответствует уровню лошади игрока.

### name
Tipo *string*. Имя лошади. Судя по всему, этот параметр не используется в ядре сервера и его указание не обязательно. По умолчанию параметр равен `0` <sup>number</sup>.

## Notas
A função **não** pode ser chamada anonimamente.

Функция не сработает, se уровень лошади игрока равен `0` ou se игрок и так сидит на лошади.

Se здоровье лошади равно нулю ([horse.get_health_pct](../horse/horse.get_health_pct.md)()), então лошадь будет призвана в мертвом виде; оседлать и повзаимодействовать с ней (через триггеры [chat](../_triggers/chat.md) ou [take](../_triggers/take.md), например) не получится.

Несмотря на então, что третий параметр не работает, имя лошади можно задать через функцию [horse.set_name](../horse/horse.set_name.md)().