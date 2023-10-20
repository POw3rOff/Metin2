root/uitooltip.py

gir ve arat;

	def AppendUniqueItemLastTime(self, restMin):
		restSecond = restMin*60
		self.AppendSpace(5)
		self.AppendTextLine(localeInfo.LEFT_TIME + " : " + localeInfo.SecondToDHM(restSecond), self.NORMAL_COLOR)

	def AppendMallItemLastTime(self, endTime):
		leftSec = max(0, endTime - app.GetGlobalTimeStamp())
		self.AppendSpace(5)
		self.AppendTextLine(localeInfo.LEFT_TIME + " : " + localeInfo.SecondToDHM(leftSec), self.NORMAL_COLOR)

deðiþtir ve pack'i kapat;

	def AppendUniqueItemLastTime(self, restMin):
		if restMin == 0 and shop.IsOpen() and not shop.IsPrivateShop():
			restMin = item.GetValue(0)
		restSecond = restMin*60
		self.AppendSpace(5)
		self.AppendTextLine(localeInfo.LEFT_TIME + " : " + localeInfo.SecondToDHM(restSecond), self.NORMAL_COLOR)

	def AppendMallItemLastTime(self, endTime):
		if endTime == 0 and shop.IsOpen() and not shop.IsPrivateShop():
			endTime = item.GetValue(0)+app.GetGlobalTimeStamp()
		leftSec = max(0, endTime - app.GetGlobalTimeStamp())
		self.AppendSpace(5)
		self.AppendTextLine(localeInfo.LEFT_TIME + " : " + localeInfo.SecondToDHM(leftSec), self.NORMAL_COLOR)