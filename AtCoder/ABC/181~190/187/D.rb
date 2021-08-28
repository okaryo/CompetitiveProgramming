n = gets.to_i
t = 0
x = []
n.times do
  a,b = gets.split.map(&:to_i)
  t -= a
  x.push(2*a + b)
end
x.sort!
ans = 0
while t <= 0 do
  t += x.pop
  ans += 1
end
puts(ans)
