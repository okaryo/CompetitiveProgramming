n = gets.to_i
p = gets.split.map(&:to_i)
c = Array.new(200010, 0)
s = 0
p.each do |pi|
  c[pi] += 1
  while c[s] > 0
    s += 1
  end
  puts s
end
