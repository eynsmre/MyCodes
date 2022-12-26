import datetime
import calendar

days = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']

today = datetime.date.today()
tomorrow = today + datetime.timedelta(days=1)
print(tomorrow)
#day-month-year
print(today.strftime("%d-%m-%Y"))
print(calendar.isleap(2020))