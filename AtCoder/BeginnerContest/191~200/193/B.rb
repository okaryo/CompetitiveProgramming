n = gets.to_i
inf = 10**9 + 7
ans = inf
n.times do
  a,p,x = gets.split.map(&:to_i)
  if x > a
    ans = [ans, p].min
  end
end
ans = -1 if ans == inf
puts ans
