x,y = gets.split.map(&:to_i)

money = [0, 300000, 200000, 100000]
bonus = 400000

ans = money[x].to_i + money[y].to_i
ans += bonus if x == 1 && y == 1

puts ans
