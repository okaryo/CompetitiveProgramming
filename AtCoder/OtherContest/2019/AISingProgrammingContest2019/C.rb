H,W = gets.split.map(&:to_i)
S = H.times.map{gets.chomp}

$black = 0
$white = 0
$check = Array.new(H){Array.new(W, false)}
DX = [1, 0, -1, 0]
DY = [0, 1, 0, -1]

def dfs(x, y)
  $check[x][y] = true
  if S[x][y] == '#'
    $black += 1
  else
    $white += 1
  end

  4.times do |dir|
    nx = x + DX[dir]
    ny = y + DY[dir]
    next if nx < 0 || nx >= H || ny < 0 || ny >= W
    next if S[x][y] == S[nx][ny]
    next if $check[nx][ny]
    dfs(nx, ny)
  end
end

ans = 0
H.times do |i|
  W.times do |j|
    next if S[i][j] == '.'
    next if $check[i][j]
    $black = 0
    $white = 0
    dfs(i, j)
    ans += $black * $white
  end
end

puts ans