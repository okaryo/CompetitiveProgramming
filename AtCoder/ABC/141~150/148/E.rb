n = gets.to_i

if n.odd?
  puts 0
else
  sum = 0
  t = 2
  while t <= n do
    t *= 5
    sum += n / t
  end
  puts sum
end
