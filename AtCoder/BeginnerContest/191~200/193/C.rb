require 'set'
n = gets.to_i
s = Set.new
i = 2
while i * i <= n
  t = i * i
  while t <= n
    s.add(t)
    t *= i
  end
  i += 1
end
puts n - s.size
