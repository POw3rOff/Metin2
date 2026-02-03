# d.setqf2()
Функция **d.setqf2** позволяет установить всем игрокам квестовый флаг.

## Parâmetros da função
### quest_name
Tipo *string*. **Parâmetro obrigatório**. Nome da missão, которому будет принадлежать флаг.

### flag_name
Tipo *string*. **Parâmetro obrigatório**. Nome da flag.

### value
Tipo *number*. **Parâmetro obrigatório**. Valor da flag.

## Notas
A função pode ser chamada anonimamente.

В отличие от функции[d.setqf](../d/d.setqf.md)(), которая позволяет установить флаг только к тому квесту, в котором она была вызвана, эта функция позволяет установить флаг любому квесту.

Простая модель использования: por exemplo, есть квест с названием pet_system, который у вас отвечает за питомцев. Вы хотите сделать так, чтобы после прохождения Катакомб Дьявола все игроки смогли использовать печать Детеныша Азраэля. Вам надо внутри квеста Катакомб сделать что-então в таком духе:

````lua
d.setqf2("pet_system", "allow_baby_azrael", 1)
````

А внутри квеста pet_system сделать проверку:

````lua
if pc.getqf("allow_baby_azrael") == 1 then
	-- призывайте питомца азраеля
end
````

Эта функция аналогична функции [pc.setf](../pc/pc.setf.md)(), только работает на всех участников подземелья.

Esta função funciona apenas em masmorras.