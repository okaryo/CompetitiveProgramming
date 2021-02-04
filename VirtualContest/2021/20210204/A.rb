require 'date'
x = gets.chomp
date = Date.parse(x)
loop do
  y = date.year
  m = date.month
  d = date.day
  if y % m == 0 && (y / m) % d == 0
    puts date.strftime('%Y/%m/%d')
    exit 0
  end
  date += 1
end
