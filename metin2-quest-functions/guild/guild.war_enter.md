# guild.war_enter()
Функция **guild.war_enter** впускает игрока в войну гильдий.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda-оппонента.

## Notas
A função **não** pode ser chamada anonimamente.

После вызова функции и успешной телепортации игроку будет присвоен квестовый флаг `is_war_member` в квесте `war`, который будет равен `1`. После завершения войны гильдий флаг будет равен `0`.