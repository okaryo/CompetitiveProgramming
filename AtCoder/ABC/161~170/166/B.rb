n, k = gets.split.map(&:to_i )
sunukes = Array.new(n.to_i, 0)
k.times do
  d = gets.to_i
  a = gets.split.map(&:to_i).each do |i|
    i -= 1
    sunukes[i] += 1
  end
end

puts sunukes.filter { |s| s == 0 }.length
