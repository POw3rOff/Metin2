root/game.py

gir ve arat;

	def OpenQuestWindow(self, skin, idx):
		if constInfo.INPUT == 1:
			return
		self.interface.OpenQuestWindow(skin, idx)

de�i�tir;

	def OpenQuestWindow(self, skin, idx):
		if constInfo.INPUT_IGNORE == 1:
			return
		if constInfo.GIFT_INPUT == 1:
			return
		self.interface.OpenQuestWindow(skin, idx)

root/constinfo.py

gir ve m�sait bir yere ekle ard�ndan pack'i kapat;

GIFT_INPUT = 0
INPUT_IGNORE = 0