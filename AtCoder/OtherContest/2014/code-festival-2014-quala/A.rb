a,b = gets.split.map(&:to_i)
cnt = 0

x = (b / 4) - ((a - 1) / 4)
y = (b / 100) - ((a - 1) / 100)
z = (b / 400) - ((a - 1) / 400)
puts x - y + z
