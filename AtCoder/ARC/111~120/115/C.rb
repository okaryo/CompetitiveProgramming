N = gets.to_i
calc = lambda do |x|
  i = 2
  t = x
  a = []
  while i * i <= t do
    while t % i == 0 do
      a << i
      t /= i
    end
    i += 1
  end
  if t != 1
    a << t
  end
  return a.size + 1
end
ans = [1]
2.upto(N) do |i|
  ans << calc.call(i)
end
puts(ans.join(' '))
