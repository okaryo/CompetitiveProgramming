n = gets.to_i

ans = []
if n.even?
  1.upto(n) do |i|
    (i+1).upto(n) do |j|
      next if i == j
      next if j == n + 1 - i
      ans << [i, j]
    end
  end
else
  1.upto(n) do |i|
    (i+1).upto(n) do |j|
      next if i == j
      next if j == n - i
      ans << [i, j]
    end
  end
end

puts ans.size
ans.each do |i, j|
  puts "#{i} #{j}"
end
