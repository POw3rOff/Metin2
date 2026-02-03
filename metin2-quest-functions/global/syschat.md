# syschat()
Функция **syschat** отправляет уведомление в чат, которое увидит только игрок, que chamou a função.

## Parâmetros da função
### message
Tipo *string*. **Parâmetro obrigatório**. A notificação que o utilizador verá, que chamou a função.

## Notas
A função **não** pode ser chamada anonimamente.

Цвет текста обычно красный.

Эта функция семантически и визуально лучше всего подходит для уведомления пользователя об ошибках и проблемах (слишком низкий уровень, недостаточно янг, вход в локацию только по пропускам и пр.).