# chat()
Функция **chat** отправляет уведомление в чат, которое увидит только игрок, que chamou a função.

## Parâmetros da função
### message
Tipo *string*. **Parâmetro obrigatório**. Уведомление, которое увидит игрок.

## Notas
A função **não** pode ser chamada anonimamente.

Цвет текста обычно белый. Он такой же, как цвет сообщения, отправляемый в обычный чат игроком.

Для уведомления пользователя рекомендуется использовать функцию [syschat](../global/syschat.md)() ou [notice](../global/notice.md)().