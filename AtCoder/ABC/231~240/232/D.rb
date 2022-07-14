H,W = gets.split.map(&:to_i)
grid = H.times.map{gets.chomp}

q = [[0,0]]
check = Array.new(H) {Array.new(W, false)}
check[0][0] = true
ans = 0
while q.length > 0 do
  c = q.shift
  x = c.first
  y = c.last
  ans = [ans, x+y+1].max

  if y+1 < W && !check[x][y+1] && grid[x][y+1] == '.'
    q << [x, y+1]
    check[x][y+1] = true
  end

  if x+1 < H && !check[x+1][y] && grid[x+1][y] == '.'
    q << [x+1, y]
    check[x+1][y] = true
  end
end

puts ans
