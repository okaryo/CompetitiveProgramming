n, m, q = gets.split.map(&:to_i)
condition = q.times.map{gets.split.map(&:to_i)}

ans = 0
(1..m).to_a.repeated_combination(n) do |x|
  t = 0
  condition.each do |a, b, c, d|
    t += d if x[b - 1] - x[a - 1] == c
  end
  ans = [ans, t].max
end

puts ans
