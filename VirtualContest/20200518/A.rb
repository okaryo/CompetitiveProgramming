n = gets.to_i
ok = false
(1..9).each do |i|
  (1..9).each do |j|
    ok = true if i * j == n
  end
end

puts ok ? 'Yes' : 'No'
