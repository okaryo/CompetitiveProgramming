a, b, m = gets.split.map(&:to_i)
as = gets.split.map(&:to_i)
bs = gets.split.map(&:to_i)

ans = as.min + bs.min

m.times do
  x, y, c = gets.split.map(&:to_i)
  x -= 1
  y -= 1
  if ans > as[x] + bs[y] - c
    ans = as[x] + bs[y] - c
  end
end

puts ans
