class Array
  alias_method :enq, :push
  alias_method :deq, :shift
end

n,x,y = gets.split.map(&:to_i)
dist = Array.new(410) { Array.new(410) { -1 } }
obstacle = -2
n.times do
  ox, oy = gets.split.map(&:to_i)
  dist[ox + 205][oy + 205] = obstacle
end
x += 205
y += 205
sx = 205
sy = 205
dx = [1, 0, -1, 1, -1, 0]
dy = [1, 1, 1, 0, 0, -1]

q = []
q.enq([sx, sy])
dist[sx][sy] = 0
while q.size > 0 do
  i, j = q.deq
  6.times do |k|
    nx = i + dx[k]
    ny = j + dy[k]
    if nx < 0 || ny < 0 || nx >= 410 || ny >= 410 || dist[nx][ny] == obstacle
      next
    end
    if dist[nx][ny] == -1
      dist[nx][ny] = dist[i][j] + 1
      q.enq([nx, ny])
    end
  end
end
if dist[x][y] == -1
  puts(-1)
else
  puts(dist[x][y])
end
