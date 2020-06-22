a,b,k = gets.split.map(&:to_i)

ans = []

k.times do |i|
  if a + i > b
    break
  end
  ans << a + i
end

k.times do |i|
  if b - k + i + 1 < a
    break
  end
  ans << b - k + i + 1
end

ans.uniq.each do |x|
  puts x
end