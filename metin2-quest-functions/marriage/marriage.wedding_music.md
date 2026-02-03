# marriage.wedding_music()
Функция **marriage.wedding_music** меняет музыку на свадебном острове.

## Parâmetros da função
### change_music
Tipo *boolean*. **Parâmetro obrigatório**. `true`, чтобы включить свадебную музыку; `false`, чтобы выключить.

### mp3
Tipo *string*. **Parâmetro obrigatório**. Название mp3-файла, находящегося в папке bgm в корне клиента. Например, `wedding.mp3`. Se параметр **change_music** равен `false`, então значение этого параметра будет проигнорировано. Однако его указание все равно является обязательным для того, чтобы функция сработала. Например, можно указать `"default"`.

## Notas
A função **não** pode ser chamada anonimamente.

A função pode ser usada apenas por jogadores, que iniciaram a cerimónia de casamento. Os convidados não podem chamar esta função.