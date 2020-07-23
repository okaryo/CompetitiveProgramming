n,m = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

cnt = Array.new(m+1, 0)
a.each do |i|
  cnt[i] += 1
end

cnt.each_with_index do |x, index|
  if x > n / 2
    puts index
    exit
  end
end

puts '?'
